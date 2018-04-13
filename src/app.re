let component = ReasonReact.statelessComponent("App");

let make = (~route, _children) => {
  ...component,
  render: _self => {
    let page =
      switch route {
      | Routing.Home => <Component1 message="Hello!" />
      };
    <div> page </div>;
  }
};