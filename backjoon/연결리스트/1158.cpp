int main()
{
    int n,k;
    list<int> l;
    list<int>::iterator itr;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        l.push_back(i);
    }
    cout <<"<";
    itr = l.begin();
    while(l.size()!=1)
    {
        for(int i=1;i<k;i++)
        {

            itr++;
            if(itr==l.end()) itr = l.begin();
        }
        cout<< *itr <<", ";
        itr = l.erase(itr);
        if (itr==l.end()) itr=l.begin();
    }
    cout << *itr << ">";
}