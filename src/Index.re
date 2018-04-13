open Utils;

registerServiceWorker();

let renderForRoute = (route) =>
  ReactDOMRe.renderToElementWithId(<App route />, "root");

let router = DirectorRe.makeRouter({"/": () => renderForRoute(Routing.Home)});

DirectorRe.init(router, "/");

/*ReactDOMRe.renderToElementWithId(<Component1 message="Hello!" />, "index1");
  ReactDOMRe.renderToElementWithId(<Component2 greeting="Hello!" />, "index2");*/