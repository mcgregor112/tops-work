const Footer = () => {
  return (
    <footer className="bg-black text-gray-300 py-10 px-6">
      <div className="max-w-7xl mx-auto grid grid-cols-1 md:grid-cols-4 gap-10">

        {/* Brand Section */}
        <div>
          <h2 className="text-2xl font-semibold text-white mb-3">
            DL91 Events
          </h2>
          <p className="text-gray-400 leading-6">
            Your ultimate destination for concerts, events and unforgettable
            moments. Book your tickets instantly with ease.
          </p>
        </div>

        {/* Quick Links */}
        <div>
          <h3 className="text-xl font-semibold text-white mb-4">Quick Links</h3>
          <ul className="space-y-2">
            <li><a href="/" className="hover:text-white duration-200">Home</a></li>
            <li><a href="/events" className="hover:text-white duration-200">Events</a></li>
            <li><a href="/venues" className="hover:text-white duration-200">Venues</a></li>
            <li><a href="/contact" className="hover:text-white duration-200">Contact Us</a></li>
          </ul>
        </div>

        {/* Support */}
        <div>
          <h3 className="text-xl font-semibold text-white mb-4">Support</h3>
          <ul className="space-y-2">
            <li><a href="/help" className="hover:text-white duration-200">Help Center</a></li>
            <li><a href="/privacy" className="hover:text-white duration-200">Privacy Policy</a></li>
            <li><a href="/terms" className="hover:text-white duration-200">Terms & Conditions</a></li>
            <li><a href="/refund" className="hover:text-white duration-200">Refund Policy</a></li>
          </ul>
        </div>

        {/* Contact Info */}
        <div>
          <h3 className="text-xl font-semibold text-white mb-4">Contact Us</h3>
          <ul className="space-y-2">
            <li>Email: support@dl91events.com</li>
            <li>Phone: +91 9876543210</li>
            <li>Location: Mumbai, India</li>
          </ul>
        </div>

      </div>

      {/* Bottom Text */}
      <div className="text-center text-gray-500 mt-10 border-t border-gray-700 pt-5">
        © {new Date().getFullYear()} DL91 Events. All rights reserved.
      </div>
    </footer>
  );
};

export default Footer;
