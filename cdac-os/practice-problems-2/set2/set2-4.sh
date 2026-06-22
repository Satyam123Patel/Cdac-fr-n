echo -n "Enter the number: "
read num

fact=1

while (( $num>=1 ))
do
	(( fact=$fact*$num ))
	(( num-- ))
done

echo "$fact"
