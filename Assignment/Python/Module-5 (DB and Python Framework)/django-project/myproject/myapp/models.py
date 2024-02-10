from django.db import models

# Create your models here.

class User(models.Model):
   name=models.CharField(max_length=20)
   role=models.CharField(max_length=10)
   
   def __str__(self):
      return f"{self.name} | {self.role}"

class ProductMst(models.Model):
   product_id=models.AutoField(primary_key=True)
   product_name=models.CharField(max_length=100)
   
   def __str__(self):
      return f"{self.product_id}, {self.product_name}"
   
class ProductSubCat(models.Model):
   product_name=models.ForeignKey(ProductMst, on_delete=models.CASCADE)
   product_price=models.CharField(max_length=10)
   image = models.FileField(upload_to='upload', default='default.jpg', null=True)
   model = models.CharField(max_length=50)
   ram = models.CharField(max_length=20)
   
   def __str__(self):
       return f"{self.product_name} | {self.product_price}"
   