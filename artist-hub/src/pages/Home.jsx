import Slider from "react-slick";
import "../styles/home.css";

export default function Home() {
  const settings = {
    dots: true,
    infinite: true,
    autoplay: true,
    autoplaySpeed: 3000,
    speed: 800,
    slidesToShow: 1,
    slidesToScroll: 1
  };

  return (
    <div className="home-container">
      <Slider {...settings}>
        <div className="slide">
          <img src="/images/banner1.jpg" className="slide-img" />
          <div className="slide-text">
            <h1>The Botanical Edit</h1>
            <p>Perfect for Modern Living</p>
            <a href="/products" className="slide-btn">Explore the Art</a>
          </div>
        </div>

        <div className="slide">
          <img src="/images/banner2.jpg" className="slide-img" />
          <div className="slide-text">
            <h1>Handmade Canvas Art</h1>
            <p>Inspired by Nature’s Palette</p>
            <a href="/products" className="slide-btn">Shop Now</a>
          </div>
        </div>

        <div className="slide">
          <img src="/images/banner3.jpg" className="slide-img" />
          <div className="slide-text">
            <h1>Minimalist Posters</h1>
            <p>New Collection 2025</p>
            <a href="/products" className="slide-btn">View Collection</a>
          </div>
        </div>
      </Slider>
    </div>
  );
}
