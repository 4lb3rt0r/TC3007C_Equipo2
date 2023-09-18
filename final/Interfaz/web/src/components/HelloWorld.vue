<script setup lang="ts">
defineProps<{ msg: string }>()

</script>

<template>
  <div class="h-full grid place-items-center">
    <h1 class="font-bold">{{ msg }}</h1>
  </div>
</template>

<style scoped>
</style>
