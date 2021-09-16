class dsu
{   
    vector<int> parent,rank;
    public:
        
        dsu(int n)
        {   
            parent.resize(n+1);
            rank.resize(n+1);

            for(int i=1;i<=n;i++)
            {
                parent[i]=i;
                rank[i]=0;
            }

        }

        ~dsu()
        {
            parent.resize(0);
            rank.resize(0);
        }

        int find_set(int a)
        {
            if(parent[a]==a)
                return a;

            return parent[a]=find_set(parent[a]);
        }

        void union_set(int a, int b)
        {
            a=find_set(a);
            b=find_set(b);

            if(a!=b)
            {
                if(rank[a]<rank[b])
                {
                    parent[a]=b;
                }

                else
                {
                    parent[b]=a;
                }

                if(rank[a]==rank[b])
                {
                    rank[a]++;
                }
            }
        }




};
