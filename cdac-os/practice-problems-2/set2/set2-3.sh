
echo -n "Enter the string: "
read input
string=""
len=${#input}
(( len-- ))
for (( i=$len;i>=0;i-- ))
do
        string="$string${input:i:1}"
done

if [[ "$string" == "$input" ]]
then echo "it is a palandrome"
else echo "it isnot a palandrom"
fi

