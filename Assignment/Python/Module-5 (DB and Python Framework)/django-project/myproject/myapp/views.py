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
   
def viewpro(request):
   if 'name' in request.session:
      productsubcat=ProductSubCat.objects.all()
      context={'productsubcat':productsubcat}
      
      return render(request, 'myapp/viewpro.html', context)
   return redirect('login')

def editpro(request,k):
   if 'name' in request.session:
      productmst=ProductMst.objects.get(product_id=k)
      productsubcat=ProductSubCat.objects.get(product_name=productmst.product_id)
      context={'productmst':productmst,
               'productsubcat':productsubcat,}
      
      print("=========== Product :",productmst,productsubcat)
      
      if request.POST:
         productmst.product_name=request.POST.get('product_name') or productmst.product_name
         productsubcat.product_price=request.POST.get('product_price') or productsubcat.product_price
         productsubcat.image=request.POST.get('image') or productsubcat.image
         productsubcat.model=request.POST.get('model') or productsubcat.model
         productsubcat.ram=request.POST.get('ram') or productsubcat.ram
         
         productmst.save()
         productsubcat.save()
         return redirect('viewpro')
      
      return render(request, 'myapp/editpro.html', context)
   return redirect('login')

def deletepro(request,k):
   pass