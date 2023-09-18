import { createApp } from 'vue';
import { createPinia } from 'pinia';
import { router } from "./router.js";
import { initializeApp } from "firebase/app";
import { getDatabase } from 'firebase/database'
import './style.css';

import App from './App.vue';

const pinia = createPinia()

const firebaseConfig = {
  apiKey: "AIzaSyDoT3rHRpPcgP9NfJlBwZq8og6ak54fTQs",
  authDomain: "database-iot-e86e3.firebaseapp.com",
  databaseURL: "https://database-iot-e86e3-default-rtdb.firebaseio.com",
  projectId: "database-iot-e86e3",
  storageBucket: "database-iot-e86e3.appspot.com",
  messagingSenderId: "1028235291519",
  appId: "1:1028235291519:web:16e670590f39ecbb15884a",
  measurementId: "G-MJJBYDGT53"
};

// Initialize Firebase
const firebaseApp = initializeApp(firebaseConfig);
export const realtimeDB = getDatabase(firebaseApp);

const app = createApp(App)

app.use(pinia)
app.use(router)
app.mount('#app')
