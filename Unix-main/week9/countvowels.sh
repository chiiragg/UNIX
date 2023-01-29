echo " ENTER THE STRING "
read str
l=`expr lengt h $str`
vowel=0
while [ $l -gt 0 ]
do
temp=`expr $str  | cut -c $l`
case $temp in
a|A) vowel=`expr $vowel + 1`;;
e|E) vowel=`expr $vowel + 1`;;
i|I) vowel=`expr $vowel + 1`;;
o|O) vowel=`expr $vowel + 1`;;
u|U) vowel=`expr $vowel + 1`;;
esac
l=`expr $l -  1`
done
echo " THE STRING HAS $vowel VOWEL'S "
