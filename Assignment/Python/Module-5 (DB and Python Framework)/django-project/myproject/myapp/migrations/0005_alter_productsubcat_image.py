# Generated by Django 5.0.2 on 2024-02-10 05:32

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('myapp', '0004_alter_productsubcat_image'),
    ]

    operations = [
        migrations.AlterField(
            model_name='productsubcat',
            name='image',
            field=models.FileField(default='default.jpg', null=True, upload_to='upload'),
        ),
    ]
