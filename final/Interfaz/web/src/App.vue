<script setup lang="ts">
import Navbar from './components/Navbar.vue'
import Footer from './components/Footer.vue'

</script>

<template>
  <!-- <Navbar /> -->
  <div class="nav_height h-screen w-full p-10">
    <router-view></router-view>
    <!-- <HelloWorld msg="Vite + Vue + Tailwind + Pinia + Router" /> -->
  </div>
</template>

<style scoped>
.nav_height {
  padding-top: 70px;
}
</style>
