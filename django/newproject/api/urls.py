from django.urls import path
from .views import get_users, create_user

urlpatterns = [
    path('users/', get_users, name='get_user'),
    path('users/create/', create_user, name='create_user'),
    path('users/<int:pk>', create_user, name='create_user')
]