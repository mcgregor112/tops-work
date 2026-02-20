import "./about.css";

export default function About() {
  return (
    <div className="about-container">
      <h1 className="about-title">About Artist Hub</h1>

      <p className="about-desc">
        Artist Hub is a platform made for creators and art lovers.
        We connect artists with people who appreciate creativity,
        allowing them to buy, sell, and showcase unique artworks.
      </p>

      <div className="about-grid">
        <div className="about-card">
          <h2>🎨 Our Mission</h2>
          <p>
            Supporting artists by giving them a place to showcase their work
            and reach a wider audience.
          </p>
        </div>

        <div className="about-card">
          <h2>🖌 What We Offer</h2>
          <p>
            Buy and sell original art, prints, posters, canvas pieces, and more —
            all verified and curated for quality.
          </p>
        </div>

        <div className="about-card">
          <h2>🌍 Community</h2>
          <p>
            Our goal is to build India’s biggest online space for emerging artists
            and genuine art buyers.
          </p>
        </div>
      </div>
    </div>
  );
}
