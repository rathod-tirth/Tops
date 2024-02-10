from django.shortcuts import render, HttpResponse

# Create your views here.
def home(request):
   return HttpResponse("<h2>Hello From Django<h2>")