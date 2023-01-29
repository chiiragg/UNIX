#swappingnumswithout3rdvariable
echo "two numbers"
read a
read b
a=`expr $a+$b|bc`
b=`expr $a-$b|bc`
a=`expr $a-$b|bc`
echo "$a-$b"
