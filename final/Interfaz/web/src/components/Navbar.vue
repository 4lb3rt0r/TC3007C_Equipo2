<script setup lang="ts">

</script>
<template>
    <nav class="fixed top-0 left-0 z-50 bg-slate-800 w-full">
        <div class="flex items-center">
            <ul class="flex flex-row font-medium space-x-8 py-3 pl-8">
                <li>
                    <router-link class="hover:bg-slate-700 p-2 rounded-md" to="/">
                        <span class="text-white font-semibold text-lg"> Home </span>
                    </router-link>
                </li>
                <!-- <li>
                    <router-link class="hover:bg-slate-700 p-2 rounded-md" to="/test">
                        <span class="text-white font-semibold text-lg"> Test </span>
                    </router-link>
                </li> -->
            </ul>
        </div>
    </nav>
</template>
