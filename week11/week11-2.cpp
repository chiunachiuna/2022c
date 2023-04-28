bool isIsomorphic(char * s, char * t){
    int N1=strlen(s),N2=strlen(s);
    if(N1!=N2) return false;

    char t1[256]={};
    char t2[256]={};

    for(int i=0;i<N1;i++)
    {
        char c1=s[i],c2=t[i];
        if(t1[c1]==0&&t2[c2]==0)
        {
            t1[c1]=c2;
            t2[c2]=c1;
        }

        if(t1[c1]!=c2) return false;
        if(t2[c2]!=c1) return false;

    }
    return true;

}
