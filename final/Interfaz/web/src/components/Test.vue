<template>
    <div class="mx-[auto] flex max-w-2xl items-center justify-center">
        <div class="w-full h-fit rounded-md shadow-md bg-gradient-to-r from-blue-500 to-violet-500 p-1">
            <div class="h-full w-full rounded-md bg-white back">
                <div class="flex justify-center space-x-2 w-full items-center py-5">
                    <h1 class="font-semibold">
                        Form
                    </h1>
                    <Switch v-model="enabled" :class="enabled ? 'bg-blue-500' : 'bg-violet-500'"
                        class="relative inline-flex h-[38px] w-[74px] shrink-0 cursor-pointer rounded-full border-2 border-transparent transition-colors duration-200 ease-in-out focus:outline-none focus-visible:ring-2 focus-visible:ring-white focus-visible:ring-opacity-75">
                        <span aria-hidden="true" :class="enabled ? 'translate-x-9' : 'translate-x-0'"
                            class="pointer-events-none inline-block h-[34px] w-[34px] transform rounded-full bg-white shadow-lg ring-0 transition duration-200 ease-in-out" />
                    </Switch>
                    <h1 class="font-semibold">
                        File
                    </h1>
                </div>
                <div class="flex justify-center space-x-2 pb-5" v-if="enabled">
                    <input type="file" ref="fileInput" @change="handleFileUpload" accept=".csv"
                        class="bg-gray-200 py-2 px-4 rounded-md shadow-md focus:outline-none focus:ring-2 focus:ring-blue-500" />
                    <button @click="uploadData"
                        class="bg-blue-500 hover:bg-blue-600 text-white py-2 px-4 rounded-md shadow-md focus:outline-none focus:ring-2 focus:ring-blue-600 ease-out duration-200">
                        Run prediction
                    </button>
                </div>

                <div v-else class="flex justify-center">
                    <form class="mb-4 space-y-4" @submit.prevent="handleSubmit">
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="age">
                                Age
                            </label>
                            <input required v-model.number="data.Age"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="age" type="number" placeholder="21">
                        </div>
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="sex">
                                Sex
                            </label>
                            <select required v-model.number="data.IsFemale"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="sex" name="sex">
                                <option value="1">Female</option>
                                <option value="0">Male</option>
                            </select>
                        </div>
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="fare">
                                Fare
                            </label>
                            <input required v-model.number="data.Fare"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="fare" type="number" placeholder="71">
                        </div>
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="cabin">
                                Has cabin
                            </label>
                            <select required v-model.number="data.HasCabin"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="cabin" name="cabin">
                                <option value="0">No</option>
                                <option value="1">Yes</option>
                            </select>
                        </div>
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="parch">
                                Parch
                            </label>
                            <input required v-model.number="data.Parch"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="parch" type="number" placeholder="0">
                        </div>
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="sibsp">
                                SibSp
                            </label>
                            <input required v-model.number="data.SibSp"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="sibsp" type="number" placeholder="0">
                        </div>
                        <div class="flex justify-between items-center">
                            <label class="block text-gray-700 text-sm font-bold mb-2" for="pclass">
                                Pclass
                            </label>
                            <input required v-model.number="data.Pclass"
                                class="shadow appearance-none border rounded w-40 py-2 ml-10 px-3 text-gray-700 leading-tight focus:ring-violet-500"
                                id="pclass" type="number" placeholder="1">
                        </div>
                        <div class="flex justify-center items-center">
                            <!-- @click="uploadData" -->
                            <button type="submit"
                                class="bg-violet-500 hover:bg-violet-600 text-white py-2 px-4 rounded-md shadow-md focus:outline-none focus:ring-2 focus:ring-violet-500 ease-out duration-200">
                                Run prediction
                            </button>
                        </div>
                    </form>
                </div>
            </div>
        </div>
    </div>

    <div v-if="results !== null" class="my-10 mx-auto max-w-4xl">
        <h1 class="font-semibold text-center mb-4">Model predictions:</h1>
        <div class="overflow-x-auto">
            <table class="w-full text-sm text-left text-gray-500 border border-collapse">
                <thead class="text-xs text-gray-900 uppercase">
                    <tr>
                        <th scope="col" class="px-6 py-3 border">Age</th>
                        <th scope="col" class="px-6 py-3 border">IsFemale</th>
                        <th scope="col" class="px-6 py-3 border">Fare</th>
                        <th scope="col" class="px-6 py-3 border">HasCabin</th>
                        <th scope="col" class="px-6 py-3 border">Parch</th>
                        <th scope="col" class="px-6 py-3 border">Pclass</th>
                        <th scope="col" class="px-6 py-3 border">SibSp</th>
                        <th scope="col" class="px-6 py-3 font-bold border">Survived</th>
                    </tr>
                </thead>
                <tbody>
                    <tr v-for="(result, key) in results" :key="key" class="bg-white border">
                        <td class="px-6 py-4 border">{{ result['Age'] }}</td>
                        <td class="px-6 py-4 border">{{ result['IsFemale'] }}</td>
                        <td class="px-6 py-4 border">{{ result['Fare'] }}</td>
                        <td class="px-6 py-4 border">{{ result['HasCabin'] }}</td>
                        <td class="px-6 py-4 border">{{ result['Parch'] }}</td>
                        <td class="px-6 py-4 border">{{ result['Pclass'] }}</td>
                        <td class="px-6 py-4 border">{{ result['SibSp'] }}</td>
                        <td class="px-6 py-4 font-bold text-gray-900 whitespace-nowrap border">{{ result['Survived'] }}</td>
                    </tr>
                </tbody>
            </table>
        </div>
    </div>
</template>
  
<script setup lang="ts">
import Papa from 'papaparse';
import { ref } from 'vue';
import { Switch } from '@headlessui/vue'

import { useFirebaseData } from '../firebase/useData';

const { results, writeMultipleQueryData, writeQueryData } = useFirebaseData();

const selectedFile = ref(null);
const enabled = ref(false);

const data = ref({
    Age: null,
    IsFemale: null,
    HasCabin: null,
    Fare: null,
    Parch: null,
    SibSp: null,
    Pclass: null
})

const handleFileUpload = (event) => {
    const file = event.target.files[0];
    if (!file) {
        return;
    }
    selectedFile.value = file;
    console.log(selectedFile.value)
};

const handleSubmit = (event) => {
    writeQueryData(data.value)
}

const uploadData = () => {
    if (!selectedFile.value) {
        alert('Please select a CSV file first.');
        return;
    }

    Papa.parse(selectedFile.value, {
        header: true,
        dynamicTyping: true,
        skipEmptyLines: true,
        complete: (result) => {
            // if (result.errors.length > 0) {
            //     console.log(result.errors[0])
            //     alert('Error parsing CSV file. Please check the format.');
            //     return;
            // }
            writeMultipleQueryData(result.data);
        },
    });
};

</script>
  

<style>
/* Chrome, Safari, Edge, Opera */
input::-webkit-outer-spin-button,
input::-webkit-inner-spin-button {
    -webkit-appearance: none;
    margin: 0;
}

/* Firefox */
input[type=number] {
    -moz-appearance: textfield;
}

slide-enter-active,
.slide-leave-active {
    transition: transform 0.5s;
}

.slide-enter,
.slide-leave-to {
    transform: translateX(100%);
}</style>