#include <iostream>
    #include <vector>
    #include <cstring>
    #include <queue>
    using namespace std;
    main()
    {
    int t,n,e;
    cin >> t;
    while (t--)
    {
    cin >> n >> e;
    vector < vector <int> > G(n);
    for (int i = 0; i < e; i++)
    {
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
    }
    int visited[n];
    memset(visited,0,sizeof(visited));
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    if(!visited[i])
    {
    queue <int> q;
    q.push(i);
    visited[i]=1;
    while (!q.empty())
    {
    int u = q.front();
    q.pop();
    for (int j = 0; j < G[u].size(); j++)
    {
    if(!visited[G[u][j]])
    {
    visited[G[u][j]]=1;
    q.push(G[u][j]);
    }
    }
    }
    ans++;
    }
    }
    cout << ans << "\n";
    }
    }