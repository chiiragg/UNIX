echo "The 3 numbers : \c"
echo "$1 $2 $3"
if [ $1 -ge $2 ] && [ $1 -ge $3 ]
then
echo "$1 is the largest";
elif [ $2 -ge $1 ] && [ $2 -ge $3 ]
then
echo "$2 is the largest";
else
echo "$3 is the largest";
fi
