import math
a = 13591409
b = 545140134
c = 640320
n = 1000
mul = 1
Sum = 0
a0 = pow(-1,0) * a
for i in range(1,n+1):
	#print(i)
	an = pow(-1,i) * (a + b * i)
	for k in range(1,i+1):
		qk = pow(k,3) * pow(c,3)/24
		pk = (2*k-1) * (6*k-1) * (6*k-5)
		#print(qk)
		#print(pk)
		mul = mul * pk / qk
	Sum += an * mul
ans = (Sum + a0) * 12 / pow(c,3.0/2.0)
ans = 1/ans

print("{0:.50f}".format(ans))
