//Euclidean algorithm

int gcd(int a,int b)
{ //반복문을 이용한 방법
    int mod = a % b;
    while(mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}
 
int gcd2(int a,int b)
{ //재귀 함수형
    if( a % b == 0 )
        return b;
    else
        return gcd2(b, a % b);
}
 
int gcd3(int a, int b)
{ //삼항 연산자 축약형 
    return (a % b == 0 ? b : gcd3(b,a%b));
}
