import { createRouter, createWebHistory } from "vue-router";
import HelloWorld from './components/HelloWorld.vue';
import Landing from './components/Landing.vue';
import Test from './components/Test.vue';

const router = createRouter({
    history: createWebHistory(),
    routes: [
        { path: '/', component: Test },
    ]
});

export { router }