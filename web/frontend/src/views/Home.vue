<script setup lang="ts">
import { ref } from "vue";
import Skeleton from 'primevue/skeleton';
import Card from 'primevue/card';
import TreeTable from 'primevue/treetable';
import Column from 'primevue/column';

// import Histogram from '../components/Histogram.vue'
// defineProps<{ msg: string }>()


const nodes = ref();

let files = [];
for (let i = 0; i < 50; i++) {
    let node = {
        key: i,
        data: {
            name: 'Item ' + i,
            size: Math.floor(Math.random() * 1000) + 1 + 'kb',
            type: 'Type ' + i
        },
        children: [
            {
                key: i + ' - 0',
                data: {
                    name: 'Item ' + i + ' - 0',
                    size: Math.floor(Math.random() * 1000) + 1 + 'kb',
                    type: 'Type ' + i
                }
            }
        ]
    };

    files.push(node);
}

nodes.value = files;
</script>

<template>
  <div class="grid grid-cols-12 gap-4">
    <div class="col-span-10">
      <Skeleton />
      <Skeleton width="75%" />
    </div>
    <div class="col-span-2">
      <Skeleton />
      <Skeleton width="75%" />
    </div>
    <Card class="col-span-3">
      <template #content>
        <Skeleton />
        <Skeleton width="75%" />
      </template>
    </Card>
    <Card class="col-span-3">
      <template #content>
        <Skeleton />
        <Skeleton width="75%" />
      </template>
    </Card>
    <Card class="col-span-2">
      <template #content>
        <Skeleton />
        <Skeleton width="75%" />
      </template>
    </Card>
    <Card class="col-span-2">
      <template #content>
        <Skeleton />
        <Skeleton width="75%" />
      </template>
    </Card>
    <Card class="col-span-2">
      <template #content>
        <Skeleton />
        <Skeleton width="75%" />
      </template>
    </Card>
    <Card class="col-span-6">
      <template #content>
        <Skeleton width="100%" height="15rem"/>
      </template>
    </Card>
    <Card class="col-span-6">
      <template #content>
        <Skeleton width="100%" height="15rem"/>
      </template>
    </Card>
    <Card class="col-span-6">
      <template #content>
        <TreeTable :value="nodes" :paginator="true" :rows="5" :rowsPerPageOptions="[5, 10, 25]">
            <Column field="name" header="Name" expander></Column>
            <Column field="size" header="Size"></Column>
            <Column field="type" header="Type"></Column>
        </TreeTable>
      </template>
    </Card>
    <Card class="col-span-6">
      <template #content>
        <TreeTable :value="nodes" :paginator="true" :rows="5" :rowsPerPageOptions="[5, 10, 25]">
            <Column field="name" header="Name" expander></Column>
            <Column field="size" header="Size"></Column>
            <Column field="type" header="Type"></Column>
        </TreeTable>
      </template>
    </Card>
  </div>
</template>
