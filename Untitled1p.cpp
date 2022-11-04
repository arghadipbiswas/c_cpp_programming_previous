#include<stdio.h>  
  
in
t *f()
;
in
t main(
)
{
in
t *p = f()
;
printf("%d\
n
", *p)
;

}
in
t *f(
)
{
in
t j = 10
;
retur
n &j
;
}
