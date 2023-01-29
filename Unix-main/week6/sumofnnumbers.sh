echo "enter the number of n "
read n
sum = 0
for ((i=0; i<=n; i++))
do
  sum = $((sum+i))
done
echo "sum of first N number is $num"
