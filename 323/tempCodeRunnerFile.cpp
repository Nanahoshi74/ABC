    // while((d.end()-lower_bound(all(d),2)) >= 1){
    //     cout << 1111 << endl;
    //     ll ind = lower_bound(all(d),2)-d.begin();
    //     ll cnt = d[ind] /2;
    //     d[ind] -= cnt*2;
    //     ll x = pa[ind].first * 2;
    //     mp[pa[ind].first] -= cnt*2;
    //     if(mp[pa[ind].first] == 0){
    //         mp.erase(pa[ind].first);
    //     }
    //     mp[x] += cnt;
    //     if(!mp.count(x)){
    //         pa.emplace_back(x,cnt);
    //         v[x] = si(pa)-1;
    //         d.push_back(cnt);
    //     }
    //     else{
    //         ll li = v[x];
    //         pa[li].second += cnt;
    //         d[li] += cnt;
    //     }
    //     print(d);
    // }
