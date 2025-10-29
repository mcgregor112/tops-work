import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";

const firebaseConfig = {
  apiKey: "AIzaSyCPMtHRbsoihyDCuXXppRhu97RQM8wmryM",
  authDomain: "fir-a2f93.firebaseapp.com",
  projectId: "fir-a2f93",
  storageBucket: "fir-a2f93.firebasestorage.app",
  messagingSenderId: "906749845503",
  appId: "1:906749845503:web:eea86b726e21ab5fb791ca",
  measurementId: "G-P8JH33W15J"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const analytics = getAnalytics(app);