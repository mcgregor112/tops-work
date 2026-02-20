import "./contact.css";

export default function Contact() {
  return (
    <div className="contact-container">
      <h1 className="contact-title">Contact Us</h1>

      <p className="contact-subtitle">
        Have questions? Need help? We're here for you.
      </p>

      <div className="contact-form-container">
        <form className="contact-form">
          <div className="form-group">
            <label>Your Name</label>
            <input type="text" placeholder="Enter your name" />
          </div>

          <div className="form-group">
            <label>Your Email</label>
            <input type="email" placeholder="Enter your email" />
          </div>

          <div className="form-group">
            <label>Your Message</label>
            <textarea placeholder="Write your message here..."></textarea>
          </div>

          <button className="contact-btn">Send Message</button>
        </form>

        <div className="contact-info">
          <h2>Artist Hub Support</h2>
          <p>Email: support@artisthub.com</p>
          <p>Phone: +91 98765 43210</p>
          <p>Working Hours: 10AM – 6PM</p>
        </div>
      </div>
    </div>
  );
}
