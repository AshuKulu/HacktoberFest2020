int main() {

    int dep[336];
    int n;
    int arrival[336] = { 2,3,4,9,11,14,17,19,28,33,37,44,49,55 };
    int dim = 14;
    int time1 = 0;

    cout << "Number of gates (10-40): ";
    cin >> n;
    while (n<10 || n>40) {
        cout << "Input a value from 10-40: ";
        cin >> n;
    }
    BinaryHeap<int> heapArrival(336);
    queue<int> heapDeparture;
    int arrayStack[40];



    //BinaryHeap<Event> eventList;
    //BinaryHeap<Plane> P; // the queue of planes
    event eventlist;
    Plane tempPlane;
    Stack gates(n - 1);

    srand(time(NULL));

    string ev1[336] = { "LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,
        "LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,
        "LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM", 
        "LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM" ,"LAX continuing to JFK","SMF continuing to RDU","IAH continuing to MSP","ABQ continuing to ATL","SJC continuing to BOS","PHX continuing to MIA","SFO continuing to ORD","SLC continuing to AUS","TUL continuing to ONT","DCA continuing to LAS","BNA continuing to SEA","MAF continuing to AMA","HOS continuing to DEN","ELP continuing to MEM"};
    int flight[336] = { 1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,
        1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013, 
        1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 ,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013 };

    //departure times
    for (int i = 0; i<336; i++) {
        int chance = rand() % 100 + 1;
        if (chance >= 40) {
            int delay = rand() % 40 + 20;
            heapDeparture.push(arrival[i] + delay + 60);
        }
        else if (chance<40) {
            int delay = rand() % 40 + 20;
            heapDeparture.push(arrival[i] + delay + 60);
        }
    }



    for (int i = n; i == 0; i--) {
        gates.push(arrayStack[i]);
    }
    for (int i = 0; i < 14; i++) {
        cout << "   " << left << setw(2) << right << setw(2) << "||" << flight[i] << "   ||" << setw(2) << arrival[i] << "     ||" << ev1[i] << "||" << dep[i] << endl;
    }

    int gatenumber[40];
    for (int i = 0; i <n; i++) {
        gatenumber[i] = i;
    }
    //Stack gates(n);
    for (int i = 0; i < 1440 ;i= i+60) {
        heapArrival.insert(2 + i);
        heapArrival.insert(3 + i);
        heapArrival.insert(4 + i);
        heapArrival.insert(9 + i);
        heapArrival.insert(11 + i);
        heapArrival.insert(14 + i);
        heapArrival.insert(17 + i);
        heapArrival.insert(19 + i);
        heapArrival.insert(28 + i);
        heapArrival.insert(33 + i);
        heapArrival.insert(37 + i);
        heapArrival.insert(44 + i);
        heapArrival.insert(49 + i);
        heapArrival.insert(55 + i);
    }

    int time0 = 0;
    int count=0;
// when time is 2, event should print with gate number if 
    //not free print airport full in event nn

    while (time0 <= 1440) {
        if (!heapArrival.isEmpty()) {
            if (time0 == heapArrival.findMin()) {
                //for (int i = 0; i < 336; ++i) {

                tempPlane.arrival_time = heapArrival.findMin();
                tempPlane.departure_time = heapDeparture.front();
                eventlist.time = time0;
                eventlist.AP = ev1[count];
                eventlist.flig = flight[count];
                //eventlist.g1 = ;
                if (!gates.empty()) {
                    cout << "Airport Full" << endl;
                }
                else {
                    //if time == arrival then assign to gate 10 gates? check the first 10 departures, put into new array of n gates and sort then push into stack backwards

                    for (int i = 0; i < n; i++) {
                        arrayStack[i] == heapDeparture.front();
                        heapDeparture.pop();
                    }
                    quickSort(arrayStack, 0, n);
                    //push to stack

                    for (int i = n; i == 0; i--) {
                        gates.push(arrayStack[i]);

                    }
                }


                heapArrival.deleteMin();



                count++;
                //gates.push(dep[i]);

                //if (dep[i] == time0) {

            //  }
                //eventlist.gate = 
            //cout << time0 << endl;
        //}

            }
            cout << time0 << "  " << tempPlane.arrival_time << "  " << eventlist.flig << "  " << eventlist.AP << "  " << tempPlane.departure_time << eventlist.g1 << endl;
            time0++;
        }
        else {
            return 0;
        }
    }


}
