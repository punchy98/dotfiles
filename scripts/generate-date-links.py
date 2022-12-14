#!/bin/python3

import datetime
import itertools

dt = datetime.datetime(2022, 4, 1)
end = datetime.datetime(2022, 12, 30)
step = datetime.timedelta(days=1)

result = []

while dt < end:
    result.append(dt.strftime('%Y-%m-%d'))
    dt += step
result2 = result
result2.insert(0,'1')
a = result2[1::2]
b = result2[3::2]
x = result[0::2]
y = result[2::2]

odds = []
evens = []

for aa,bb in zip(a,b):
	#odds.append(zip(aa,bb))
	print("<<[[",aa,"]] | [[",bb,"]]>>")
for xx,yy in zip(x,y):
	#evens.append(zip(xx,yy))
	print("<<[[",xx,"]] | [[",yy,"]]>>")
