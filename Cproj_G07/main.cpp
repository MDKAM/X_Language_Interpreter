#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;
int lgg=0;
double *vbb;
string *fpp;
string ll;
int *vb;
int y,z;
string *fp;
string reshte;
vector <string>lg(0);

void mod(string a)
{
    int n,m,g,i=0,j=0,k=0,j0,k0,J=0,K=0,io=0;
    string b,c,d;
    g=a.length();
    n=a.find(",");
    b=a.substr(0,n);
    a[n]='!';
    m=a.find(",");
    c=a.substr(n+1,m-n-1);
    a[m]='!';
    d=a.substr(m+1,g-m-1);
    for(i=0;i<y;i++)
    {
        if(fp[i]==b)
            break;
    }
    j0=c[0];
    k0=d[0];
    vb[i]=0;
    if((j0>=48)&&(j0<=57))
    {
        for(int o=0;o<(c.length());o++)
        {
            io=c[o];
            J+=(io-48);
            J*=10;
        }
        J/=10;
        io=0;
        vb[i]+=J;
    }
    else
    {
        for(j=0;j<y;j++)
        {
            if(fp[j]==c)
                break;
        }
        vb[i]+=vb[j];
    }
    if((k0>=48)&&(k0<=57))
    {
        for(int o=0;o<(d.length());o++)
        {
            io=d[o];
            K+=(io-48);
            K*=10;
        }
        K/=10;
        vb[i]=vb[i]%K;
    }
    else
    {
        for(k=0;k<y;k++)
        {
            if(fp[k]==d)
                break;
        }
        vb[i]=vb[i]%vb[k];
    }

}

void divi(string a)
{
    bool lol=0,ro=0,mn=0;
    int pk,io=0,ali=0,ee,j,oo,g,n,m,i;
    string b,c,d;
    g=a.length();
    n=a.find(",");
    b=a.substr(0,n);
    a[n]='!';
    m=a.find(",");
    c=a.substr(n+1,m-n-1);
    a[m]='!';
    d=a.substr(m+1,g-m-1);
    for(j=0;j<2;j++)
    {
        char qw[c.length()];
        if(j==1)
        {
            c=d;
        }
    for(i=0;i<y;i++)
    {
        if(fp[i]==b)
        {
            break;
        }
    }
    if(y==0)
        lol=1;
    else if((i==y)&&(fp[i-1]!=b))
    {
        lol=1;
    }

    if(lol==0)
    {
        m=c[0];
        if(m>=48&&m<=57)
        {
            oo=0;
            for(int kk=0;kk<(c.length());kk++)
            {
                io=c[kk];
                oo+=(io-48);
                oo*=10;
            }
            oo/=10;
            if(j==0)
            {
                vb[i]=oo;
            }
            else
                vb[i]/=oo;
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vb[i]=vb[pk];
                    else
                        vb[i]/=vb[pk];
                    break;
                }
            }
            if(pk==0)
                ro=1;
            else if(pk==y&& fp[pk-1]!=c)
            {
                ro=1;
            }
            for(int kk=0;kk<z&&ro;kk++)
            {
                if(fpp[kk]==c)
                {
                    cout << "Error: REAL VARIABLE USED" << endl;
                    return;
                    break;
                }
            }
        }

    }
    if(lol)
    {
        for(ali=0;ali<z;ali++)
        {
            if(fpp[ali]==b)
                break;
        }
        m=c[0];
        if(m>=48&&m<=57)
        {
            for(ee=0;ee<c.length();ee++)
            {
                qw[ee]=c[ee];
            }
            if(j==0)
            vbb[ali]=atof(qw);
            else
                vbb[ali]/=atof(qw);
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vbb[ali]=vb[pk];
                    else
                        vbb[ali]/=vb[pk];
                    break;
                }
            }
            if(pk==0)
                mn=1;
            else if(pk==y&&fp[pk-1]!=c)
                mn=1;
            for(int wc=0;wc<z&&mn;wc++)
            {
                if(fpp[wc]==c)
                {
                    if(j==0)
                    vbb[ali]=vbb[wc];
                    else
                        vbb[ali]/=vbb[wc];
                    break;
                }
            }

        }

    }
    }
    return;


}

void mult(string a)
{
    bool lol=0,ro=0,mn=0;
    int pk,io=0,ali=0,ee,j,oo,g,n,m,i;
    string b,c,d;
    g=a.length();
    n=a.find(",");
    b=a.substr(0,n);
    a[n]='!';
    m=a.find(",");
    c=a.substr(n+1,m-n-1);
    a[m]='!';
    d=a.substr(m+1,g-m-1);
    for(j=0;j<2;j++)
    {
        char qw[c.length()];
        if(j==1)
        {
            c=d;
        }
    for(i=0;i<y;i++)
    {
        if(fp[i]==b)
        {
            break;
        }
    }
    if(y==0)
        lol=1;
    else if((i==y)&&(fp[i-1]!=b))
    {
        lol=1;
    }

    if(lol==0)
    {
        m=c[0];
        if(m>=48&&m<=57)
        {
            oo=0;
            for(int kk=0;kk<(c.length());kk++)
            {
                io=c[kk];
                oo+=(io-48);
                oo*=10;
            }
            oo/=10;
            if(j==0)
            {
                vb[i]=oo;
            }
            else
                vb[i]*=oo;
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vb[i]=vb[pk];
                    else
                        vb[i]*=vb[pk];
                    break;
                }
            }
            if(pk==0)
                ro=1;
            else if(pk==y&& fp[pk-1]!=c)
            {
                ro=1;
            }
            for(int kk=0;kk<z&&ro;kk++)
            {
                if(fpp[kk]==c)
                {
                    cout << "Error: REAL VARIABLE USED" << endl;
                    return;
                    break;
                }
            }
        }

    }
    if(lol)
    {
        for(ali=0;ali<z;ali++)
        {
            if(fpp[ali]==b)
                break;
        }
        m=c[0];
        if(m>=48&&m<=57)
        {
            for(ee=0;ee<c.length();ee++)
            {
                qw[ee]=c[ee];
            }
            if(j==0)
            vbb[ali]=atof(qw);
            else
                vbb[ali]*=atof(qw);
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vbb[ali]=vb[pk];
                    else
                        vbb[ali]*=vb[pk];
                    break;
                }
            }
            if(pk==0)
                mn=1;
            else if(pk==y&&fp[pk-1]!=c)
                mn=1;
            for(int wc=0;wc<z&&mn;wc++)
            {
                if(fpp[wc]==c)
                {
                    if(j==0)
                    vbb[ali]=vbb[wc];
                    else
                        vbb[ali]*=vbb[wc];
                    break;
                }
            }

        }

    }
    }
    return;


}

void sub (string a)
{
    bool lol=0,ro=0,mn=0;
    int pk,io=0,ali=0,ee,j,oo,g,n,m,i;
    string b,c,d;
    g=a.length();
    n=a.find(",");
    b=a.substr(0,n);
    a[n]='!';
    m=a.find(",");
    c=a.substr(n+1,m-n-1);
    a[m]='!';
    d=a.substr(m+1,g-m-1);
    for(j=0;j<2;j++)
    {
        char qw[c.length()];
        if(j==1)
        {
            c=d;
        }
    for(i=0;i<y;i++)
    {
        if(fp[i]==b)
        {
            break;
        }
    }
    if(y==0)
        lol=1;
    else if((i==y)&&(fp[i-1]!=b))
    {
        lol=1;
    }

    if(lol==0)
    {
        m=c[0];
        if(m>=48&&m<=57)
        {
            oo=0;
            for(int kk=0;kk<(c.length());kk++)
            {
                io=c[kk];
                oo+=(io-48);
                oo*=10;
            }
            oo/=10;
            if(j==0)
            {
                vb[i]=oo;
            }
            else
                vb[i]-=oo;
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vb[i]=vb[pk];
                    else
                        vb[i]-=vb[pk];
                    break;
                }
            }
            if(pk==0)
                ro=1;
            else if(pk==y&& fp[pk-1]!=c)
            {
                ro=1;
            }
            for(int kk=0;kk<z&&ro;kk++)
            {
                if(fpp[kk]==c)
                {
                    cout << "Error: REAL VARIABLE USED" << endl;
                    return;
                    break;
                }
            }
        }

    }
    if(lol)
    {
        for(ali=0;ali<z;ali++)
        {
            if(fpp[ali]==b)
                break;
        }
        m=c[0];
        if(m>=48&&m<=57)
        {
            for(ee=0;ee<c.length();ee++)
            {
                qw[ee]=c[ee];
            }
            if(j==0)
            vbb[ali]=atof(qw);
            else
                vbb[ali]-=atof(qw);
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vbb[ali]=vb[pk];
                    else
                        vbb[ali]-=vb[pk];
                    break;
                }
            }
            if(pk==0)
                mn=1;
            else if(pk==y&&fp[pk-1]!=c)
                mn=1;
            for(int wc=0;wc<z&&mn;wc++)
            {
                if(fpp[wc]==c)
                {
                    if(j==0)
                    vbb[ali]=vbb[wc];
                    else
                        vbb[ali]-=vbb[wc];
                    break;
                }
            }

        }

    }
    }
    return;


}

void add(string a)
{
    bool lol=0,ro=0,mn=0;
    int pk,io=0,ali=0,ee,j,oo,g,n,m,i;
    string b,c,d;
    g=a.length();
    n=a.find(",");
    b=a.substr(0,n);
    a[n]='!';
    m=a.find(",");
    c=a.substr(n+1,m-n-1);
    a[m]='!';
    d=a.substr(m+1,g-m-1);
    for(j=0;j<2;j++)
    {
        char qw[c.length()];
        if(j==1)
        {
            c=d;
        }
    for(i=0;i<y;i++)
    {
        if(fp[i]==b)
        {
            break;
        }
    }
    if(y==0)
        lol=1;
    else if((i==y)&&(fp[i-1]!=b))
    {
        lol=1;
    }

    if(lol==0)
    {
        m=c[0];
        if(m>=48&&m<=57)
        {
            oo=0;
            for(int kk=0;kk<(c.length());kk++)
            {
                io=c[kk];
                oo+=(io-48);
                oo*=10;
            }
            oo/=10;
            if(j==0)
            {
                vb[i]=oo;
            }
            else
                vb[i]+=oo;
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vb[i]=vb[pk];
                    else
                        vb[i]+=vb[pk];
                    break;
                }
            }
            if(pk==0)
                ro=1;
            else if(pk==y&& fp[pk-1]!=c)
            {
                ro=1;
            }
            for(int kk=0;kk<z&&ro;kk++)
            {
                if(fpp[kk]==c)
                {
                    cout << "Error: REAL VARIABLE USED" << endl;
                    return;
                    break;
                }
            }
        }

    }
    if(lol)
    {
        for(ali=0;ali<z;ali++)
        {
            if(fpp[ali]==b)
                break;
        }
        m=c[0];
        if(m>=48&&m<=57)
        {
            for(ee=0;ee<c.length();ee++)
            {
                qw[ee]=c[ee];
            }
            if(j==0)
            vbb[ali]=atof(qw);
            else
                vbb[ali]+=atof(qw);
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==c)
                {
                    if(j==0)
                    vbb[ali]=vb[pk];
                    else
                        vbb[ali]+=vb[pk];
                    break;
                }
            }
            if(pk==0)
                mn=1;
            else if(pk==y&&fp[pk-1]!=c)
                mn=1;
            for(int wc=0;wc<z&&mn;wc++)
            {
                if(fpp[wc]==c)
                {
                    if(j==0)
                    vbb[ali]=vbb[wc];
                    else
                        vbb[ali]+=vbb[wc];
                    break;
                }
            }

        }

    }
    }
    return;


}

void print(string a)
{
    bool lol;
    int i,j,lo;
    string b,u;
    for(lo=0;reshte[lo]==' ';lo++)
    {
    }
    b.assign(reshte,lo,reshte.length());
    if(a[0]=='"')
    {
        u.assign(b,1,b.length()-2);
        cout<<u<<endl;
    }
    else
    {
        for(i=0;i<y;i++)
        {
            if(a==fp[i])
            {
                cout<<vb[i]<<endl;
                return;
            }
        }
        if(y==0)
            lol=true;
        else if(i==y&&fp[y-1]!=a)
        {
            lol=1;
        }
        for(j=0;j<z&&lol;j++)
        {
            if(a==fpp[j])
            {
                cout<<vbb[j]<<endl;
                return;
            }
        }
    }

}

void read(string a)
{
    bool lo;
    int i=0,j;
    for(i=0;i<y;i++)
    {
        if(a==fp[i])
        {
         cout<<"?";
         cin>>vb[i];
         cin.get();
         return;
        }
    }
    if(i==0)
        lo=true;
    else if(i == y && !(fp[y-1] == a))
        lo = true;
    for(j=0;j<z && lo;j++)
    {
        if(a==fpp[j])
        {
            cout<<"?";
            cin>>vbb[j];
            cin.get();
            return;
        }

    }
}

void Assign(string line)
{
    bool lol=0,ro,mn;
    string a,b;
    char *s1;
    int k,l,t,i,m,io,pk,g,ee,ali;
    k=line.length();
    l=line.find(",");
    a.assign(line,0,l);
    b.assign(line,l+1,k-l);
    char qw[b.length()];
    m=b[0];
    for(i=0;i<y;i++)
    {
        if(fp[i]==a)
        {
            break;
        }
    }
    if(y==0)
        lol=1;
    else if((i==y)&&(fp[i-1]!=a))
    {
        lol=1;
    }

    if(lol==0)
    {
        vb[i]=0;
        if(m>=48&&m<=57)
        {
            for(int j=0;j<(b.length());j++)
            {
                io=b[j];
                vb[i]+=(io-48);
                vb[i]*=10;
            }
            vb[i]/=10;
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==b)
                {
                    vb[i]=vb[pk];
                    break;
                }
            }
            if(pk==0)
                ro=1;
            else if(pk==y&& fp[pk-1]!=b)
            {
                ro=1;
            }
            for(int j=0;j<z&&ro;j++)
            {
                if(fpp[j]==b)
                {
                    vb[i]=vbb[j];
                    break;
                }
            }
        }

    }
    if(lol)
    {
        for(ali=0;ali<z;ali++)
        {
            if(fpp[ali]==a)
            {
               break;
            }
        }
            if(z==0)
            {
        cout<<a<<"  was not declared in this scope"<<endl;
        return;
            }
    else if((ali==z)&&(fp[ali-1]!=a))
            {
        cout<<a<<"  was not declared in this scope"<<endl;
        return;
            }
        if(m>=48&&m<=57)
        {
            for(ee=0;ee<b.length();ee++)
            {
                qw[ee]=b[ee];
            }
            vbb[ali]=atof(qw);
        }
        else
        {
            for(pk=0;pk<y;pk++)
            {
                if(fp[pk]==b)
                {
                    vbb[ali]=vb[pk];
                    break;
                }
            }
            if(pk==0)
                mn=1;
            else if(pk==y&&fp[pk-1]!=b)
                mn=1;
            for(int wc=0;wc<z&&mn;wc++)
            {
                if(fpp[wc]==b)
                {
                    vbb[ali]=vbb[wc];
                    break;
                }
            }

        }

    }


    return;
}

void counttr(string p)
{
    int *q ;
    double *vb1;
    string *fp1;
    int a=0,v=1;
    string h=",";
    a=p.length();
    for (int i=0;i<a;i++)
    {
        if(p[i]==h[0])
            v++;
    }
    q=new int [v+1];
    fp1=new string [v + z];
    vb1=new double[v + z];
    q[0]=-1;
    q[v]=a;
    for(int i=0,j=1;i<a;i++)
    {

        if(p[i]==h[0])
        {
            q[j]=i;
            j++;
        }
    }
    for(int i = 0; i < z; i++)
    {
        fp1[i] = fpp[i];
        vb1[i] = vbb[i];
    }

    for(int i=z;i<v+z;i++)
    {
        fp1[i]=p.substr(q[i - z]+1,q[i+1 - z]-q[i - z]-1);
    }

    fpp = fp1;
    vbb = vb1;
    z+=v;
    return;
}

void countt(string p)
{
    int *q , *vb1;
    string *fp1;
    int a=0,v=1;
    string h=",";
    a=p.length();
    for (int i=0;i<a;i++)
    {
        if(p[i]==h[0])
            v++;
    }
    q=new int [v+1];
    fp1=new string [v + y];
    vb1=new int[v + y];
    q[0]=-1;
    q[v]=a;
    for(int i=0,j=1;i<a;i++)
    {

        if(p[i]==h[0])
        {
            q[j]=i;
            j++;
        }
    }
    for(int i = 0; i < y; i++)
    {
        fp1[i] = fp[i];
        vb1[i] = vb[i];
    }

    for(int i=y;i<v+y;i++)
    {
        fp1[i]=p.substr(q[i - y]+1,q[i+1 - y]-q[i - y]-1);
    }

    fp = fp1;
    vb = vb1;
    y+=v;
    return;
}

string space(string &k)
{
    int r=0,t,p=0,q;
    string a,b,c,d;
    d=" ";
    q=k.length();
    for(p=0;k[p]==d[0];p++)
    {
    }
    a.assign(k,p,q-p);
    if(a=="end"||a=="runf")
    {
        k=a;
        return c;
    }
    r=a.length();
    b.assign(a,0,a.find(" "));
    reshte.assign(a,a.find(" "),a.length());
    t=b.length();
    for(int i=t;i<r;i++)
    {
        if((a[i]!=d[0]))
            {
                c+=a[i];
            }
    }
    k=b;
    return c;
}

void koochik(string &a)
{
    char e;
    int b;
    for(int i=0;i<a.length();i++)
    {
        b=a[i];
        if(b>=65&&b<=90)
        {
           e=b+32;
           a[i]=e;
        }
    }
}

void forlabel(string a,string &b,string &c,string &d,string &y)
{
    int g,n,m;
    g=a.length();
    if(a.find(">")<a.find(","))
        n=a.find(">");
    else if(a.find("<")<a.find(","))
        n=a.find("<");
    else
        n=a.find(",");
    b=a.substr(0,n);
    y=a[n];
    a[n]='!';
    m=a.find(",");
    c=a.substr(n+1,m-n-1);
    a[m]='!';
    d=a.substr(m+1,g-m-1);
}

bool llabel(string a,string b,string c,string d)
{
    bool u=0;
    int gh,kh,e,io,oo=0;
    for(int t=0;t<2;t++)
    {
        u=0;
        if(t==1)
            a=b;
        for(e=0;e<y;e++)
        {
            if(a==fp[e])
                break;
        }

        if(y==0)
            u=1;
        else if(e==y&&fp[e-1]!=a)
            u=1;
        if(u==0)
        {
            if(t==0)
            gh=vb[e];
            else
            kh=vb[e];
        }
        if(u==1)
        {
            oo=0;
            if(a[0]>='0' && a[0]<='9')
            {
            for(int j=0;j<(a.length());j++)
                {
                io=a[j];
                oo+=(io-48);
                oo*=10;
                }

            oo/=10;
            }
            else
            {
                cout<<a<<" was not declared in this scope";
            }
            if(t==0)
                gh=oo;
            else if(t==1)
                kh=oo;

        }

    }

    if((d==">")&&gh>kh)
        return 1;
    else if((d==",")&&gh!=kh)
        return 1;
    else if((d=="<")&&gh<kh)
        return 1;
    else
        return 0;

}

int adad(string a)
{
    char *zb;
    zb=new char[a.length()];
    for(int i=0;i<a.length();i++)
    {
        zb[i]=a[i];
    }
    return atoi(zb);
}

void edit()
{
    int amu=lg.size();
    ofstream kjk;
    kjk.open(ll.c_str());
    kjk.close();
    for(int i=0;i<amu;i++)
    {
        kjk.open(ll.c_str(),ios::app);
        kjk<<lg[i];
        kjk<<endl;
        kjk.close();
    }
}

bool syntax(string input)
{
    string ret;
    int i;

    for(i = 0; i < input.size() && input[i] == ' '; i++);

    for(; i < input.size(); i++)
    {

        if( input[i] <= 'Z' && 'A' <= input[i])
            ret.push_back(input[i] - 'A' + 'a');

        else if(input[i] == '\"')
        {
            ret.push_back('\"');
            i++;

            while (input[i]!='\"' && i < input.size())
            {
                ret.push_back(input[i]);
                i++;
            }

            if (i < input.size())
                ret.push_back('\"');
        }

        else if(input[i] == ' ')
        {
            ret.push_back(' ');
            i++;
            while(input[i] == ' ' && i < input.size())
                i++;

            if(input[i] != ' ')
                i--;
        }

        else if(input[i] == ',')
        {

            if(input[i-1] == ' ')
                ret.erase(ret.end()-1);
            ret.push_back(',');
            i++;
            while(input[i] == ' ' && i < input.size())
                i++;

            if(input[i] != ' ')
                i--;

        }

        else
            ret.push_back(input[i]);
    }

    while(ret[ret.size()-1] == ' ')
        ret.erase(ret.end()-1);

    string com , var[3];
    for(i = 0; i < ret.size() && ret[i] != ' '; i++)
        com.push_back(ret[i]);
    for(i = i + 1;i < ret.size() && ret[i] != ','; i++)
        var[0].push_back(ret[i]);
    for(i = i + 1;i < ret.size() && ret[i] != ','; i++)
        var[1].push_back(ret[i]);
    for(i = i + 1;i < ret.size() && ret[i] != ','; i++)
        var[2].push_back(ret[i]);

    struct dastoor{
        string name;
        int tedad;
    };

    struct dastoor T[] = {\
    /*"int"       , 1,\
    "real"      , 1,\*/
    "assign"    , 2,\
    "read"      , 1,\
    "print"     , 1,\
    "end"       , 0,\
    "add"       , 3,\
    "sub"       , 3,\
    "mult"      , 3,\
    "divi"      , 3,\
    "divr"      , 3,\
    "mod"       , 3,\
    "ifgo"      , 3,\
    "label"     , 1,\
    "runf"      , 1,\
    "show"      , 1,\
    "edit"      , 1};

    for(int i = 0; i < 15; i++)
    {
        if(T[i].name == com)
        {
            for(int j = 0; j < T[i].tedad; j++)
                if(var[j].empty())
                {
                    cout << "not enough parameters!" << endl;
                    return 1;
                }


            for(int j = T[i].tedad; j < 3; j++)
               if(!var[j].empty())
                {
                    cout << "too many parameters!" << endl;
                    return 1;
                }

        }
    }

    if(com == "int")
    {
        for(int i = 0; i < var[0].size() ; i++)
            if(var[0][i] > 'z' || var[0][i] < 'a')
            {
                cout << "invalid name!" << endl;
                return 1;
            }

        if(var[0].size() > 8)
        {
            cout << "invalid name! (too large)" << endl;
            return 1;
        }

        for(int i = 0; i < y; i++)
            if(fp[i] == var[0])
            {
                cout << "repeated name!" << endl;
                return 1;
            }

        for(int i = 0; i < z; i++)
            if(fpp[i] == var[0])
            {
                cout << "repeated name!" << endl;
                return 1;
            }

    }

    else if(com == "real")
    {
        for(int i = 0; i < var[0].size() ; i++)
            if(var[0][i] > 'z' || var[0][i] < 'a')
            {
                cout << "invalid name!" << endl;
                return 1;
            }

        if(var[0].size() > 8)
        {
            cout << "invalid name! (too large)" << endl;
            return 1;
        }

        for(int i = 0; i < y; i++)
            if(fp[i] == var[0])
            {
                cout << "repeated name!" << endl;
                return 1;
            }

        for(int i = 0; i < z; i++)
            if(fpp[i] == var[0])
            {
                cout << "repeated name!" << endl;
                return 1;
            }
    }

    else if(com == "print")
    {
        if((var[0][0] == '\"' && var[0][var[0].size()-1] != '\"') || (var[0][0] == '\"' && var[0][var[0].size()-2] != '\"' && var[0][var[0].size()-1] != ' '))
        {
            cout <<"string error!" << endl;
            return 1;
        }

        else
        {
            bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
    }

    else if(com == "assign")
    {
        {
            bool isint=false;
            for(int i = 0; i < y;i++)
            {
                if(fp[i] == var[0])
                    isint = true;
            }

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found! 1" <<endl;
                    return 1;
                }
            }
        }

        for(int j = 1; j < 2; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }

    else if(com == "add")
    {
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                if(fpp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }

    else if(com == "sub")
    {
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                if(fpp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }
    else if(com == "mult")
    {
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                if(fpp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }
    else if(com == "divi")
   {
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                if(fpp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }
    else if(com == "divr")
    {
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                if(fpp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }
    else if(com == "mod")
    {
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < z;i++)
                if(fpp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < z;i++)
                    if(fpp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
        {
        bool isint=false;
            for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isint = true;

            if(!isint)
            {
                bool isdouble = false;
                for(int i = 0; i < y;i++)
                if(fp[i] == var[0])
                    isdouble = true;

                if(!isdouble)
                {
                    cout << "variable not found!" <<endl;
                    return 1;
                }
            }
        }
        for(int j = 1; j < 3; j++)
        {
            if(var[j][0] >= '0' && var[j][0] <= '9')
            {
                bool point = false;
                for(int i = 0; i < var[j].size(); i++)
                {
                    if(var[j][i] < '0' || var[j][i] > '9' && var[j][i] != '.')
                    {
                        cout << "invalid number" << endl;
                        return 1;
                    }

                    if(var[j][i] == '.')
                    {
                        if(point)
                        {
                            cout << "invalid number" << endl;
                            return 1;
                        }
                        else
                            point = true;
                    }
                }
            }
            else
            {
                bool isint=false;
                for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isint = true;

                if(!isint)
                {
                    bool isdouble = false;
                    for(int i = 0; i < y;i++)
                    if(fp[i] == var[0])
                        isdouble = true;

                    if(!isdouble)
                    {
                        cout << "variable not found!" <<endl;
                        return 1;
                    }
                }
            }
        }
    }
    else if( com == "runf")
    {

    }
    else if( com == "end" )
    {

    }
    else if(com == "ifgo")
    {
        cout<<"specific for runf!"<<endl;
    }
    else if( com=="label")
    {
        cout<<"specific for runf!"<<endl;
    }
    else if( com=="show")
    {
    }
    else if( com=="edit")
    {
    }
    else if(com == "read"){}
    else
    {
        cout<<"command is wrong!"<<endl;
    }

    return 0;

}



int main()
{
    int yre;
    string input,para,aa,bb,cc,dd,lopez,rr="i";
    bool label,qom=0;
    ifstream jkf;
    while(1)
    {
        cout<<"->";
        getline(cin,input);
        input+="  ";

        if(syntax(input))
            continue;

        koochik(input);
        para=space(input);
        if(input=="runf")
        {
            ll=para;
            lg.clear();
            jkf.open(para.c_str());
            if(!jkf.is_open())
            {
                cout << "file not found (404)!" << endl;
                continue;
            }
        while(getline(jkf,input))
        {
                lg.push_back(input);
        }
        int tt=0;
        while(tt!=lg.size())
        {
        if(qom==0)
        {
        input=lg[tt];
        tt++;
        }
            else if(qom==1)
            {
                yre++;
                input=lg[yre];
                tt=yre+1;
                qom=0;
            }

            koochik(input);
            para=space(input);
            if(input=="ifgo")
            {
                forlabel(para,aa,bb,cc,dd);
                label=llabel(aa,bb,cc,dd);

                if(label==1)
                {
                    for(yre=0;yre<lg.size();yre++)
                    {
                        input=lg[yre];
                        para=space(input);
                        if(input=="label"&&para==cc)
                        {
                            qom=1;
                            break;
                        }

                    }

                }

                else
                    qom=0;


            }
            else if(input=="real")
            {
                counttr(para);
            }
            else if(input=="int")
            {
                countt(para);
            }
            else if(input=="assign")
            {
                Assign(para);
            }
            else if(input=="end")
            {
                input="ya ali";
                jkf.close();
                break;
            }
            else if(input=="read")
            {
                read(para);
            }
            else if(input=="print")
            {
                print(para);
            }
            else if(input=="add")
            {
                add(para);
            }
            else if(input=="sub")
            {
                sub(para);
            }
            else if(input=="mult")
            {
                mult(para);
            }
            else if(input=="divi")
            {
                divi(para);
            }
            else if(input=="mod")
            {
                mod(para);
            }
        }
        jkf.close();
        }
        else if(input=="real")
        {
            counttr(para);
        }
        else if(input=="int")
        {
            countt(para);
        }
        else if(input=="show")
        {
            cout<<"line "<<adad(para)<<":"<<lg[adad(para)-1]<<endl;
        }
        else if(input=="edit")
        {
            cout<<"@";
            getline(cin,lg[adad(para)-1]);
            edit();
        }
        else if(input=="assign")
        {
            Assign(para);
        }
        else if(input=="end")
        {
            exit(0);
        }
        else if(input=="read")
        {
            read(para);
        }
        else if(input=="print")
        {
            print(para);
        }
        else if(input=="add")
        {
            add(para);
        }
        else if(input=="sub")
        {
            sub(para);
        }
        else if(input=="mult")
        {
            mult(para);
        }
        else if(input=="divi")
        {
            divi(para);
        }
        else if(input=="mod")
        {
            mod(para);
        }
        else
        {
            cout<<input<<" was not declared in this scope"<<endl;
        }
    }
    jkf.close();
    return 0;
}



