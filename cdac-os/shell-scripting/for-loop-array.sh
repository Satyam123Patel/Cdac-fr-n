fruits=( "apple" "banana" "mango" "watermelon" "guava" )
len=${#fruits[@]}
for (( i=0;i<$len;i++ ))
do
	echo "The fruit is ${fruits[i]}"
done
