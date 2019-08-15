[@react.component]
let make = () => {
  <div>
    <MWC.MaterialIcon icon="alarm" hasRipple=true />
    <MWC.MaterialIcon icon="clock" hasRipple=false />
    <MWC.MaterialIcon icon="clock" hasRipple=false className="color-teal" />
    <MWC.Button raised=true> {ReasonReact.string("meow")} </MWC.Button>
  </div>;
};