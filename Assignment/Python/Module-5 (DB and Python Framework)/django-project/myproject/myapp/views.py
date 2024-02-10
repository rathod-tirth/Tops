from django.shortcuts import render
from .models import *

# Create your views here.
def home(request):
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