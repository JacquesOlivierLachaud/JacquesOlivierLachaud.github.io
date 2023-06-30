#!/bin/bash

let n=0;
let i=0;
while test $i -lt 17; do
    let j=0;
    echo "<tr>"
    while test $j -lt 9; do
        echo "$n" | awk '{ printf("<td><a href=\"output/pok-%03d.jpg\"><img src=\"input/pok-%03d.png\"></a></td>\n", $1, $1); }'
        let n=n+1
        let j=j+1
    done
    echo "</tr>"
    let n=n+1
    let i=i+1
done
    
