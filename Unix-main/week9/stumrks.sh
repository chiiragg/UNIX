echo "enter the name"
read name
echo "enter the student number"
read no
echo "enter the marks m1,m2,m3 "
read m1 m2 m3
if [ $m1 -lt 50 ] || [ $m2 -lt 50 ] || [ $ m3  -lt 5 0 ]
then
echo "fail"
else
total=`expr $m1 + $m2 + $ m3`
avg=`expr $total / 3`
if [ $avg -ge 90  ]
then
echo "distinction"
else if [ $avg -ge 60  ]
then
echo "first "
else
echo "second"
fi
fi
fi
