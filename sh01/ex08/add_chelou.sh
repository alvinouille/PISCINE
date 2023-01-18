#!/bin/sh
A=$(echo $FT_NBR2 | tr 'mrdoc' '01234' )
B=$(echo $FT_NBR1 | tr "\'" "0" | tr '\\' '1' | tr "\"" "2" | tr "?" "3" | tr "!" "4" )
C=$(echo "ibase=5;$A+$B" | bc)
echo "obase=13;$C" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'
