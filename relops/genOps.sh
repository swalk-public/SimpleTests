

# ghastly function name generator
function getName()
{
  local arg1=$1
  #echo "entering getname with [$arg1]"
  retval=$(echo $arg1  |\
    sed -e "s/if //" |\
    sed -e "s/ return 1;//" |\
    sed -e "s/(/p/g" |\
    sed -e "s/)/p/g" |\
    sed -e "s/a/A/g" |\
    sed -e "s/b/B/g" |\
    sed -e "s/c/C/g" |\
    sed -e "s/<=/le/g" |\
    sed -e "s/</lt/g" |\
    sed -e "s/==/eq/g" |\
    sed -e "s/!=/ne/g" |\
    sed -e "s/>=/ge/g" |\
    sed -e "s/>/gt/g"  |\
    sed -e "s/||/or/g"  |\
    sed -e "s/&&/and/g"  |\
    tr -d ' ')
 #echo "returning [$retval]"
}


# read generated statements to create
# little functions

while IFS= read -r line; do
    getName "$line" 
    echo -n "int "
    echo -n $retval
    echo    "(int a, int b, int c, int d) {"
    echo -n "  "
    echo $line
    echo "  return 0;"
    echo "}"
done < $1
