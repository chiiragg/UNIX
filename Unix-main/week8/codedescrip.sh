answer=y
while [ "$answer" = "y" ]; do
  echo "Enter the code and description : \c" > /dev/tty
  read code desc
  echo "$code | $desc" 
  echo "\n Enter any more? ( y or n ) : \c" > /dev/tty
  read anymore
  
  case "$anymore" in
    y*|Y*) answer=y;;
    n*|N*) answer=n;;
        *) answer=y;;
  esac
done > newlist
