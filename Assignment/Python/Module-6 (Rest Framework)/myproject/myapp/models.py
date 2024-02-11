from django.db import models

# Create your models here.

class Book(models.Model):
   title=models.CharField(max_length=30)
   author=models.CharField(max_length=20)
   isbn=models.CharField(max_length=13, unique=True)
   publisher=models.CharField(max_length=50)
   
   def __str__(self):
       return self.title
   