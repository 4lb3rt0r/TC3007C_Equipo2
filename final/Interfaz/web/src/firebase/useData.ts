// useFirebaseData.ts
import { ref as vueRef, onMounted } from 'vue';
import { ref, onValue, set, remove } from "firebase/database";

import { realtimeDB } from '../main'

export function useFirebaseData() {
    const results = vueRef(null);

    const resultsRef = ref(realtimeDB, 'results');

    const fetchItems = () => {
        onValue(resultsRef, (snapshot) => {
            results.value = snapshot.val();
        });
    }

    const writeMultipleQueryData = (rows: any[]) => {
        remove(ref(realtimeDB, `query`)).then(() => {
            rows.map((row, index) => {
                console.log(index, row['Survived'])
                set(ref(realtimeDB, `query/row-${index}`), row);
            })
        })
    }

    const writeQueryData = (data: any) => {
        remove(ref(realtimeDB, `query`)).then(() => {
            set(ref(realtimeDB, `query/row-0`), data);
        })

    }

    // const updateData = () => {
    //     const itemsRef = realtimeDB.ref('personas');
    //     // Update data in the Firebase Realtime Database
    //     itemsRef.update({
    //         key1: 'New Value 1',
    //         key2: 'New Value 2',
    //         // Add more key-value pairs as needed
    //     });
    // };

    onMounted(fetchItems);

    return {
        results,
        writeQueryData,
        writeMultipleQueryData
        // updateData,
    };
}
