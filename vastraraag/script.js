// Simple client-side alert on form submission
const form = document.querySelector('form');
form.addEventListener('submit', function (e) {
  e.preventDefault();
  alert('Thank you for contacting Vastra Raag. We will get back to you soon.');
  form.reset();
});
