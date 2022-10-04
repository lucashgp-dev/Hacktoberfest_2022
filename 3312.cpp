# inclui  < bits / stdc ++. h >
usando  namespace  std ;

# define  um primeiro
# define  b segundo
# define  pb push_back
# define  mp make_pair
# define  sz ( x ) int (x.size ())
# define  all ( x ) x.begin (), x.end ()
# define  FOR ( i, n ) for ( int i = 0 ; (i) < int (n); (i) ++)

# define  MOD  1000000007
# define  INF  0x3f3f3f3f
# define  INFLL  0x3f3f3f3f3f3f3f3f
# define  EPS  1e-9
# define  PI  3.141592653589793238462643383279502884


typedef  long long ull sem  sinal; // ULL 
typedef  long  long ll; // 1LL
vetor typedef <ll> vi;
par typedef <ll, ll> ii;


vetor typedef < int > bignum;
const  int base = 1000 * 1000 * 1000 ;

void  print (bignum & a) {
    printf ( " % d " , a. empty ()? 0 : a. back ());
    para ( int i = ( int ) a. size () - 2 ; i> = 0 ; - i) {
        printf ( " % 09d " , a [i]);
    }
}
void  fix (bignum & a) {
    while (a. size ()> 1u && a. back () == 0 )
        uma. pop_back ();
}
bool  comp (bignum a, bignum b) {
    corrigir (a); corrigir (b);
    if (a. size ()! = b. size ()) retorna a. tamanho () <b. tamanho ();
    para ( int i = ( int ) a. size () - 1 ; i> = 0 ; i -) {
        if (a [i]! = b [i]) retorna a [i] <b [i];
    }
    return  false ;
}
void  str2bignum ( char * s, bignum & a) {
    uma. limpar ();
    para ( int i = ( int ) strlen (s); i> 0 ; i- = 9 ) {
        s [i] = 0 ;
        uma. push_back ( atoi (i> = 9 ? s + i- 9 : s));
    }
    corrigir (a);
}
bignum int2bignum ( int n) {
    bignum a;
    uma. limpar ();
    if (n == 0 ) a. push_back ( 0 );
    para (; n> 0 ; n / = base)
        uma. push_back (n% de base);
    
    return a;
}
int  bignum2int (bignum & a) {
    int ans = 0 , p = 1 ;
    para ( int i = 0 ; i <( int ) a. size (); i ++) {
        ans + = a [i] * p; p * = base;
    }
    return ans;
}
bignum multiplicar ( int a, bignum b) {
    bignum c;
    transportar int = 0 , bi;
    c. redimensionar (b. tamanho ());
    para ( int i = 0 ; i <( int ) b. size () || transportar; i ++) {
        if (i == ( int ) b. size ()) c. push_back ( 0 );
            bi = i <( int ) b. tamanho ()? b [i]: 0 ;
        long  long cur = carry + a * 1ll * bi;
        c [i] = int (cur% base);
        carry = int (cur / base);
    }
    corrigir (c);
    return c;
}

bool  isPrime ( int n) {
    if (n < 2 )
        return  false ;
    
    para ( int i = 2 ; i * i <= n; ++ i)
        if (n% i == 0 )
            return  false ;

    return  true ;
}

int  main () {
    int n;

    cin >> n;
    
    vetoriais <bignum> fatoriais;

    fatoriais. pb ( int2bignum ( 1 ));
    fatoriais. pb ( int2bignum ( 1 ));

    para ( int i = 2 ; i <= 100 ; ++ i) {
        fatoriais. pb ( multiplique (i, fatoriais [i- 1 ]));
    }
    
    vetor < int > primos;
    PARA (i, n) {
        int x;
        cin >> x;

        if ( isPrime (x))
            primos. pb (x);
    }

    for ( auto it = primos. begin (); it! = primos. end (); ++ it) {
        cout << * it << " ! = " ;
        imprimir (fatoriais [* it]);
        cout << ' \ n ' ;
    }

    
    return  0 ;
}
