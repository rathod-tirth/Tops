from django.shortcuts import render, redirect
from .models import *

# Create your views here.
def home(request):
   if 'name' in request.session:
      user=User.objects.get(name=request.session['name'])
      context={'user':user}
      return render(request, 'myapp/index.html',context)
   else:
      return render(request, 'myapp/login.html')

def login(request):
   if 'name' in request.session:
      user=User.objects.get(name=request.session['name'])
      context={'user':user}
      return render(request, 'myapp/index.html',context)
   else:   
      if request.POST:
         try:
            user=User.objects.get(name=request.POST.get('name'))
            request.session['name']=user.name
            context={'user':user}
            return render(request, 'myapp/index.html',context)
         
         except Exception as e:
            print("====== Error :",e)
            msg="Invalid Name Pls Enter Again"
            return render(request, 'myapp/login.html',{'msg':msg})
      else:
         return render(request, 'myapp/login.html')
      
def addpro(request):
   if 'name' in request.session:
      if request.POST:
         productmst=ProductMst.objects.create(product_name=request.POST.get('product_name'))
         
         if productmst:
            productsubcat=ProductSubCat.objects.create(product_name=productmst,
                                                       product_price=request.POST.get('product_price'),
                                                       image=request.FILES.get('image'),
                                                       model=request.POST.get('model'),
                                                       ram=request.POST.get('ram'))
            
            print("=========== Product :",productmst,productsubcat)
            
            context={'msg':"Product Added Successfully"}
            return render(request, 'myapp/addpro.html', context)
      else:
         user=User.objects.get(name=request.session['name'])
         context={'user':user}
         return render(request, 'myapp/addpro.html', context)
   else:
      return redirect('login')