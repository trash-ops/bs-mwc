[@react.component]
let make = () => {
  <div>
    <div> {ReasonReact.string("body is here")} </div>
    <MWC.Button raised=true> {ReasonReact.string("raised")} </MWC.Button>
  </div>;
};