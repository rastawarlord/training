
import requests
import sys

proxies = {
   'http': 'http://127.0.0.1:8899'
}

url = 'http://www.example.com'

response = requests.post(url, proxies=proxies)

print(response.headers)
print(response.cookies)
