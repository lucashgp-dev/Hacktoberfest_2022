n = int(input())
l = []
lv = []
for i in range(n):
  x = int(input())
  l.append(x)
l.sort()
for i in l:
  v = 0
  if i not in lv:
    lv.append(i)
    for j in l:
      if i == j:
        v += 1
    print(i,"aparece",v,"vez(es)")
