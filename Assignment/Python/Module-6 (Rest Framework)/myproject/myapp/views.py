from django.shortcuts import render
from rest_framework.decorators import api_view
from rest_framework.response import Response
from .models import Book
from .serializers import BookSerializer
# Create your views here.

def index(request):
   return render(request,'myapp/index.html')