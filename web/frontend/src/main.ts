import { createApp } from "vue";
import router from "./router.ts";
import PrimeVue from "primevue/config";
import Tailwind from "primevue/passthrough/tailwind";
import PrimeVueTailwindConfig from "./PrimeVueTailwind.config.ts";

import { usePassThrough } from "primevue/passthrough";

import './style.css'
import App from './App.vue'

const app = createApp(App);

const CustomTailwind = usePassThrough(
    Tailwind, PrimeVueTailwindConfig,
    {
        mergeSections: true,
        mergeProps: false
    }
);

app.use(PrimeVue, { unstyled: true, pt: CustomTailwind });

app.use(router);
app.use(PrimeVue, { unstyled: true, pt: Tailwind });
app.mount('#app');
