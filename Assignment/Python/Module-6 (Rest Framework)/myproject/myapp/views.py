from django.shortcuts import render,redirect
from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework import status
from .models import Book
from .serializers import BookSerializer
# Create your views here.

def index(request):
   return render(request,'myapp/index.html')

def addbook(request):
   return render(request,'myapp/addbook.html')

def deletebook(request,k):
   book=Book.objects.get(id=k)
   book.delete()
   
   bookdata=Book.objects.all()
   context={'bookdata':bookdata}
   return render(request,'myapp/viewbook.html',context)

@api_view(['GET','POST','PUT'])
def bookapi(request):
   try:
      if request.method=='POST':
         serializer=BookSerializer(data=request.data)
         if serializer.is_valid():
            serializer.save()
         return redirect(addbook)
      elif request.method=='GET':
         bookdata=Book.objects.all()
         serializer=BookSerializer(bookdata, many=True)
         context={'bookdata':bookdata}
         return render(request, 'myapp/viewbook.html',context)
   except Exception as e:
      print("============ Error :",e)
      return Response(status=status.HTTP_500_INTERNAL_SERVER_ERROR)

# @api_view(['GET', 'POST','PUT','DELETE'])
# def studentgetdata(request):
#     try:
#         if request.method == 'GET':
#             sdata = Student.objects.all()
#             serializer = StudentSerializer(sdata, many=True)
#             return Response(serializer.data, status=status.HTTP_200_OK)
#         elif request.method == 'POST':  
#             serializer = StudentSerializer(data = request.data)
#             if serializer.is_valid():
#                 serializer.save()
#                 return Response(serializer.data, status=status.HTTP_201_CREATED)
#             return Response(status=status.HTTP_405_METHOD_NOT_ALLOWED)  # Method Not Allowed for POST
#     except Exception as e:
#         print(f"An error occurred: {e}")
#         return Response(status=status.HTTP_500_INTERNAL_SERVER_ERROR)